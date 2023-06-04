from sys import argv

# Try to get file contents, or state file not found
try:
    file = open(argv[1], 'r')
    c = file.read().split("\n") # Array of lines
    file.close()
except FileNotFoundError:
    c = [""]
    print("File not found")



out = "" # Output markdown
if (len(c)): # If file exists and has contents
    l=0 # Line number


    # Get title line
    while (c[l].strip() != "/*"): l+=1
    l+=1
    out += "# " + c[l].strip() + "\n\n" # Title
    l+=1


    # Get description
    while (c[l].strip() != "List of functions:"):
        out += c[l].strip() + "\\\n" # Description
        l+=1
    l+=1


    # Get list of functions
    functionIds = []
    out = out[:-4] + "\n\n### List of functions\n" # Remove previous backslash
    out += "| Function Name | Description |\n|:---:|---|\n"
    while (c[l].strip() != "*/"):
        
        temp = c[l].strip()
        temp = temp.split("\t")
        functionIds.append(temp[0].replace(" ", "-")+"-"+str(l))
        out += f"| [{temp[0]}](#{functionIds[-1]}) | {temp[-1]} |\n"
        l+=1
    out += "\n"


    # Get functions
    fi=-1 # Function Id Index
    while (l<len(c) and "/*" in c[l:]):
        fi += 1
        while (c[l].strip() != "/*"): l+=1
        l+=1
        fMainDesc = c[l].strip() # Function descriptor (the 'title')
        l+=2

        
        fDesc = "" # Function description
        while (c[l].strip() != "Attributes:" and c[l].strip() != "Parameters:"):
            fDesc += f"{c[l].strip()}\\\n"
            l+=1
        fDesc = fDesc[:-4]


        fType = c[l].strip()[:-2]
        fParameters = "\n\n### " + c[l].strip()[:-1] + "\n" # Function parameter list
        fParameters += "| " + fType + " | Description | Notes |\n|:---:|---|---|\n"
        l+=1
        while (c[l].strip() != ""):
            tParam = c[l].split("=")
            fParameters += "| <a name=\"" + functionIds[fi] + "\"></a>" + tParam[0].strip() + " | " + tParam[-1].strip() + " | "
            l+=1
            #print("c[l][:2] [" + c[l].strip() + "] " + str(c[l][:2] == "\t\t"))
            while (c[l][:3] == "\t\t\t"):
                fParameters += f"{c[l].strip()}<br>"
                l+=1
            fParameters += " |\n"


        fRet = ""
        if (fType == "Parameter"): # Function
            l+=1
            if (c[l].strip() == "No return value"):
                fRet = "\n**Returns:** Nothing\n"
            else:
                fRet = "\n**Returns:** `" + " ".join(c[l].strip().split(" ")[2:]) + "`\n"
        l+=1



        fExtra = "\n### Extra Info:\n"
        if (c[l].strip() != "*/"):
            if (c[l].strip() != ""):
                fExtra += c[l].strip() + "\\\n"
            l+=1
        
        while (c[l].strip() != "*/"):
            fExtra += c[l].strip() + "\\\n"
            l+=1

        if (fExtra == "\n### Extra Info:\n"):
            fExtra = "\n### Extra Info:\n**None**\n\n"
        else:
            fExtra = fExtra[:-2] + "\n\n"


        l+=1
        fTitle = " ".join(c[l].strip()[:-1].split(" ")[1:]).strip()

        out += f"## <a name=\"{functionIds[fi]}\"></a>`{fTitle}`\n"
        out += f"### {fMainDesc}\n\n{fDesc}\n{fParameters}\n{fRet}\n{fExtra}\n\n"
        out += "---\n"



ofile = open(argv[1][:-1]+"md", "w+")
ofile.write(out)
ofile.close()
print(out)
