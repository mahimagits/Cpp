# try:
#     num = int(input("Enter a number:"))
#     print(10/num)
# except ZeroDivisionError:
#     print("Cannot divide by zero")
# except ValueError:
#     print("Please enter a valid integer")

import numpy as np
# n1 = int(input("Enter a number:"))
# n2 = int(input("enter another number:"))
# result = sum(range(n1, n2 + 1))
# print(result)

n1 = int(input("Enter a number:"))
n2 = int(input("enter another number:"))
result = np.multiply(n1, n2)
print(result)

# import pandas as pd

# data = {
#     "Name" : ["Charlie", "Bob", "Adam"],
#     "Age" : [20, 19, 21]
# }

# df = pd.DataFrame(data)

# print(df)