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
        functionIds.append(temp[0].replace(" ", "-")+"-"+l)
        out += f"| [{temp[0]}](#{functionIds[-1]}) | {temp[-1]} |\n"
        l+=1
    out += "\n"


    # Get functions
    fi=0 # Function Id Index
    while (l<len(c)):
        while (c[l].strip() != "/*"): l+=1
        l+=1
        fMainDesc = f"<a name=\"{functionIds[fi]}\"></a>{c[l].strip()}" # Function descriptor (the 'title')
        l+=2

        
        fDesc = "" # Function description
        while (c[l].strip() != "Attributes:" and c[l].strip() != "Parameters:"):
            fDesc += f"{c[l].strip()}\\\n"
            l+=1


        fParameters = "\n\n### " + c[l].strip()[:-1] + "\n" # Function parameter list
        fParameters += "| " + c[l].strip()[:-1] + " | Description |\n|:---:|---|\n"
        l+=1
        
    out += "<a name=\"test\"></a>Test"



ofile = open(argv[1][:-1]+"md", "w+")
ofile.write(out)
ofile.close()
print(out)
