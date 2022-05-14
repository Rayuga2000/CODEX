"""import numpy as np

r,c=map(int,input("Enter the row and col: ").split())

#mat1=np.array([input("Enter elements for 1st Matrix:") for i in range(r*c)],int)
mat1=np.array([input("Enter elements for 1st Matrix:").split(" ",(r*c)-1)],int)
mat2=np.array([input("Enter elements for 2nd Matrix:").split(" ",(r*c)-1)],int)

mat1.shape=(r,c)
mat2.shape=(r,c)

print("The 1st matrix is:\n",mat1)
print("The 2nd matrix is:\n",mat2)"""

from matplotlib import pyplot
from pandas import read_csv
from pandas.plotting import scatter_matrix

filename='pima(copy).csv'
data=read_csv(filename)
#data.hist()
#data.plot(kind='density',subplots=True,layout=(3,3))
#data.plot(kind='box',subplots=True,layout=(3,3))
scatter_matrix(data)
pyplot.show()