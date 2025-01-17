# matrix_1 = [[1,2],[3,4]]
# matrix_2 = [[1,2],[3,4]]

# #print the matrix 
# print("Matrix 1 :")
# for row in matrix_1:
#     print(row)

# print("Matrix 2 :")
# for row in matrix_2:
#     print(row)


#user friendly 

rows=int(input("Enter the number of rows :"))
column=int(input("Enter the number of column :"))

#euta empty matrix banaunu paryo
matrix=[]


#taking input
print("Enter the elements row by row :")
for i in range(rows):
    row=list(input().split()) # if mapping use gareko bhaye harek choti usle input lai int ma convert gardinxa
    #row=list(map(int,input().split())
    matrix.append(row)

print("The entered matrix is :")
for row in matrix:
    print(row)

