import pandas as pd 
import matplotlib.ticker as ticker
import matplotlib.pyplot as plt
df1 = pd.read_csv("./data/Algoritmo5.csv", sep=';', header = None)


f = plt.figure()
f.set_figwidth(8)
f.set_figheight(6)


df1.columns = ['x', 'y']
#plt.plot(df1['x'], df1['y'])
#plt.semilogy(df1['x'], df1['y'])
plt.loglog(df1['x'], df1['y'])

plt.title('Algoritmo 5')
plt.xlabel('N chamadas do algoritmo')
plt.ylabel('Contagem de iterações no loop interno')

# define a função de formatação de rótulo personalizada
def format_x_ticks(x, pos):
    """
    Retorna a notação decimal para os rótulos do eixo x em vez da notação científica.
    """
    return '{:.0f}'.format(x)

# atribui a função de formatação de rótulo personalizada para o eixo x
plt.gca().xaxis.set_major_formatter(ticker.FuncFormatter(format_x_ticks))
plt.gca().yaxis.set_major_formatter(ticker.ScalarFormatter())

plt.show()


