import pandas as pd

df=pd.DataFrame({'A':[1,2,3],'B':[4,5,6]})
print(df)

#join one dataframe column with another
df1=pd.DataFrame({'C':[7,8,9]})
df=pd.DataFrame.join(df,df1)
print(df)

#add elements to the pre-defined columns
df2=pd.DataFrame({'A':[4],'B':[5],'C':[6]})
df=df.append(df2)
df=df.reset_index(drop=True) #reset the imdex without adding an extra 'index' row
print(df)

#add elements to the pre-defined columns
lst=[]
lst=input("Enter data to be added: ")
print(lst[1])
"""for i in range(1,4):
    df.loc[df.last_valid_index()+i]=lst[i]

print(df)"""