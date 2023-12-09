import numpy as np
import math

class neuron:
    def __init__(self) -> None:
        learning_rate=0.5
        w=np.random.random((2,1))
        b=np.random.uniform(0,1)
        print(w,b)

    def sigmoid(z):
        return 1/(1+math.exp(-z))
    
    def forward(input):
        return ob.sigmoid(np.dot(input,ob.w))
    
    def train(input,output):
        print(ob.forward(input))
        print(output)

ob=neuron()
input = np.array([[0, 0], [0, 1], [1, 0], [1, 1]])
output = np.array([[0], [0], [0], [1]])
ob.train(input,output)