import pandas as pd 
import seaborn as sns
import matplotlib.pyplot as plt
df1 = pd.read_csv("./data/Algoritmo5.csv", sep=';', header = None)

#print(df1.head(3))

#print(df1.columns)

f = plt.figure()
f.set_figwidth(4)
f.set_figheight(1)

df1.columns = ['x', 'y']
plt.plot(df1['x'], df1['y'])
plt.title('Title of the plot')
plt.xlabel('X-axis label')
plt.ylabel('Y-axis label')
#plt.axis('equal')

plt.show()


#plt.show()