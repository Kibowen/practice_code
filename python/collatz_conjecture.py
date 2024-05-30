import matplotlib.pyplot as plt

def collatz_conjecture(n):
    sequence = [n]
    
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = (n * 3) + 1
        
        sequence.append(n)
    
    return sequence

def generate_graph(n):
    sequence = collatz_conjecture(n)
    
    plt.plot(sequence, 'b-', marker='o', markersize=3)
    plt.title('Collatz Conjecture')
    plt.xlabel('Step')
    plt.ylabel('Value')
    plt.grid(True)
    plt.savefig('collatz_graph.png')
    plt.show()

def main():
    num = int(input("Enter a positive integer: "))
    
    print("Collatz sequence:", collatz_conjecture(num))
    
    generate_graph(num)
    
    print("Graph generated and saved as 'collatz_graph.png'")

if __name__ == '__main__':
    main()

