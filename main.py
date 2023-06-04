from sys import argv

try:
    file = open(argv[1], 'r')
    contents = file.read()
    file.close()
except FileNotFoundError:
    contents = ""
    print("File not found")

i=0
if (contents):
    for i in contents:
        print(i)
