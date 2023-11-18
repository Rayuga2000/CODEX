import numpy as np
import timeit
import matplotlib.pyplot as plt

def normal_matrix_multiply(A, B):
    return np.dot(A, B)

def strassen_matrix_multiply(A, B):
    if len(A) <= 32:
        return np.dot(A, B)
    
    size = len(A) // 2

    A11 = A[:size, :size]
    A12 = A[:size, size:]
    A21 = A[size:, :size]
    A22 = A[size:, size:]

    B11 = B[:size, :size]
    B12 = B[:size, size:]
    B21 = B[size:, :size]
    B22 = B[size:, size:]

    P1 = strassen_matrix_multiply(A11 + A22, B11 + B22)
    P2 = strassen_matrix_multiply(A21 + A22, B11)
    P3 = strassen_matrix_multiply(A11, B12 - B22)
    P4 = strassen_matrix_multiply(A22, B21 - B11)
    P5 = strassen_matrix_multiply(A11 + A12, B22)
    P6 = strassen_matrix_multiply(A21 - A11, B11 + B12)
    P7 = strassen_matrix_multiply(A12 - A22, B21 + B22)

    C11 = P1 + P4 - P5 + P7
    C12 = P3 + P5
    C21 = P2 + P4
    C22 = P1 - P2 + P3 + P6

    result = np.zeros((len(A), len(B[0])))
    result[:size, :size] = C11
    result[:size, size:] = C12
    result[size:, :size] = C21
    result[size:, size:] = C22

    return result

def measure_execution_time(function, *args, **kwargs):
    start_time = timeit.default_timer()
    result = function(*args, **kwargs)
    end_time = timeit.default_timer()
    execution_time = end_time - start_time
    return result, execution_time

def generate_random_matrix(size):
    return np.random.random((size, size))

def compare_execution_times(matrix_sizes, num_trials):
    normal_times = []
    strassen_times = []

    for size in matrix_sizes:
        A = generate_random_matrix(size)
        B = generate_random_matrix(size)

        normal_total_time = 0
        strassen_total_time = 0

        for _ in range(num_trials):
            _, normal_time = measure_execution_time(normal_matrix_multiply, A, B)
            _, strassen_time = measure_execution_time(strassen_matrix_multiply, A, B)

            normal_total_time += normal_time
            strassen_total_time += strassen_time

        normal_average_time = normal_total_time / num_trials
        strassen_average_time = strassen_total_time / num_trials

        normal_times.append(normal_average_time)
        strassen_times.append(strassen_average_time)

    return normal_times, strassen_times

def plot_execution_times(matrix_sizes, normal_times, strassen_times):
    plt.plot(matrix_sizes, normal_times, label='Normal Multiplication')
    plt.plot(matrix_sizes, strassen_times, label="Strassen's Multiplication")
    plt.xlabel('Matrix Size')
    plt.ylabel('Average Execution Time (s)')
    plt.title('Comparative Analysis: Normal vs Strassen Multiplication')
    plt.legend()
    plt.show()

if __name__ == "__main__":
    matrix_sizes = [2**i for i in range(2, 9)]
    num_trials = 5

    normal_times, strassen_times = compare_execution_times(matrix_sizes, num_trials)

    plot_execution_times(matrix_sizes, normal_times, strassen_times)
