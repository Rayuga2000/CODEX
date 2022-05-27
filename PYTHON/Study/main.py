from matplotlib import pyplot
from pandas import read_csv
from pandas.plotting import scatter_matrix

filename='pima.csv'
data=read_csv(filename)
#data.hist()
#data.plot(kind='density',subplots=True,layout=(3,3))
#data.plot(kind='box',subplots=True,layout=(3,3))
scatter_matrix(data)
pyplot.show()