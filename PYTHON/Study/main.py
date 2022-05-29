from matplotlib import pyplot
import pandas as pd
from pandas import read_csv
from pandas.plotting import scatter_matrix

filename='../Class/Datasets/Netflix/titles.csv'
col_subset=['title','type','genres','release_year','imdb_popularity','imdb_score']
data=read_csv(filename,usecols=col_subset)

Netflix=pd.DataFrame(data,columns=col_subset)
Netflix=pd.DataFrame(Netflix.sort_values('imdb_popularity',ascending=False).head(50).values,
columns=['Title','Type','Genres','Release_year','IMDB_Popularity','IMDB_Score'])
Netflix.to_csv('Netflix.csv')

Netflix['IMDB_Score'][32,40,47]='4.8','4.3','4.2'
Netflix.to_csv('Netflix.csv')
print(Netflix)