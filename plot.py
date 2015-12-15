from matplotlib.pyplot import *
from numpy import *

output = genfromtxt('output.dat')
xval = output[:,0]
yval = output[:,1]
zval = output[:,2]
time = output[:,3]

plot(time,xval,label="mRNA")
plot(time,yval,label="Enzyme")
plot(time,zval,label="Activated Inhibitor")
xlabel('Time')
ylabel('Concentration (M)')

legend()
show()
