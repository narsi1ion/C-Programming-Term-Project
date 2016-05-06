#!/usr/bin/python
from matplotlib.pyplot import *
from numpy import *

output = genfromtxt('output.dat')
xval = output[:,0]
yval = output[:,1]
zval = output[:,2]
time = output[:,3]

xmean = mean(xval[xval.size/4:])
ymean = mean(yval[yval.size/4:])
zmean = mean(zval[zval.size/4:])
plot(time,xval,label="mRNA (mean = %4.3f)" % xmean)
plot(time,yval,label="Enzyme (mean = %4.3f)" % ymean)
plot(time,zval,label="Activated Inhibitor (mean = %4.3f)" % zmean)

axhline(xmean, color='k', linestyle='--')
axhline(ymean, color='k', linestyle='--')
axhline(zmean, color='k', linestyle='--')
print xmean, ymean, zmean
xlabel('Time')
ylabel('Concentration')
title('k3 = 0.24')
#ylim(1.4,1.45)
xlim(0,400)

legend()
#legend(loc = 'center right')
#legend(loc = 'lower right')

#gcf().set_size_inches(25,5)
#show()
#savefig("k3_024")
