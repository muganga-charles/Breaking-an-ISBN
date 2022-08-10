ISBN = input("Enter the ISBN")
while len(ISBN) > 10:
    ISBN = input("Enter the right ISBN")
print("GSI prefix:",ISBN[0:3])
print("group identifier:",ISBN[3:4])
print("Publisher code:" ,ISBN[4:7])
print("Item Number:",ISBN[7:8])
print("Check digit:",ISBN[8:9])