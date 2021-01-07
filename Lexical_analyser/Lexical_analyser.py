def main():
    code = input("Enter the Code(WITH SPACES):")
    s=code.split(" ")
    keywords=["for","while","if","float","int","else","and","break","continue","char","or","elif","long","auto","case","const",
              "default","do","double","enum","extern","goto","register","return","short","signed","sizeof","static",
              "struct","switch","typedef","union","unsigned","void","volatile",]
    operators=["+","-","*","/","%","++","--","=","<=",">=","!=",">","<"]
    separators=[",",";"]
    for i in s :
        if (i in keywords):
            print(i," is a KEYWORD")
        elif (i in operators):
            print(i," is an OPERATOR")
        elif(i in separators):
            print(i," is a SEPARATOR")
        else:
            print(i," is an IDENTIFIER")
main()
