// q1

// #include <iostream>
// using namespace std;

// #define MAX 5

// int stack[MAX];
// int top = -1;

// void push(int value) {
//     if (top == MAX - 1) {
//         cout << "Stack Overflow! Cannot push element." << endl;
//     } else {
//         top++;
//         stack[top] = value;
//         cout << value << " pushed into stack." << endl;
//     }
// }


// void display() {
//     if (top == -1) {
//         cout << "Stack is empty." << endl;
//     } else {
//         cout << "Stack elements are: ";
//         for (int i = top; i >= 0; i--) {
//             cout << stack[i] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     push(12);
//     push(30);
//     push(40);

//     display();

// }



// q2

// #include <iostream>
// using namespace std;

// #define MAX 5

// int stack[MAX];
// int top = -1;


// void push(int value) {
//     if (top == MAX - 1) {
//         cout << "Stack Overflow!" << endl;
//     } else {
//         stack[++top] = value;
//     }
// }

// void pop() {
//     if (top == -1) {
//         cout << "Stack Underflow! Stack is empty." << endl;
//     } else {
//         cout << stack[top] << " popped from stack." << endl;
//         top--;
//     }
// }

// void display() {
//     if (top == -1) {
//         cout << "Stack is empty." << endl;
//     } else {
//         cout << "Stack elements: ";
//         for (int i = top; i >= 0; i--) {
//             cout << stack[i] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     push(20);
//     push(50);
//     push(60);

//     display();
//     pop();
//     display();

//     return 0;
// }



// q3


// #include <iostream>
// using namespace std;

// #define MAX 5

// int stack[MAX];
// int top = -1;

// void push(int value) {
//     if (top < MAX - 1) {
//         stack[++top] = value;
//     }
// }

// void peek() {
//     if (top == -1) {
//         cout << "Stack is empty. No top element." << endl;
//     } else {
//         cout << "Top element is: " << stack[top] << endl;
//     }
// }

// int main() {
//     push(60);
//     push(70);
//     push(80);

//     peek();   

//     return 0;
// }


 // q4

// #include <iostream>
// using namespace std;

// #define MAX 5

// int stack[MAX];
// int top = -1;


// bool isEmpty() {
//     if (top == -1)
//         return true;
//     else
//         return false;
// }

// int main() {
//     if (isEmpty()) {
//         cout << "Stack is empty." << endl;
//     } else {
//         cout << "Stack is not empty." << endl;
//     }

//     return 0;
// }


 // q5


#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = MAX - 1;  


bool isFull() {
    if (top == MAX - 1)
        return true;
    else
        return false;
}

int main() {
    if (isFull()) {
        cout << "Stack is full." << endl;
    } else {
        cout << "Stack is not full." << endl;
    }

    return 0;
}


