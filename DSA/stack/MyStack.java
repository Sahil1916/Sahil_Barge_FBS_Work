package stack;

public class MyStack {
	int top;
	int max;
	int[] arrStack;

	public MyStack(int size) {

		top = -1;
		this.max = size;
		arrStack = new int[max];

	}

	public void push(int data) {

		if (top == max - 1) {
			System.out.println("Stack overflow");
		} else {
			top++;
			arrStack[top] = data;
		}

	}

	public int pop() {
		if (top == -1) {
			System.out.println("Stack is empty");
			return -1;
		} else {
			return this.arrStack[top--];
		}

	}

	public int peep() {

		if (top == -1) {
			System.out.println("stack is empty");
			return -1;
		} else {
			return arrStack[top];
		}

	}

	public void display() {

		for (int i = top; i >= 0; i--) {

			System.out.println("" + this.arrStack[i]);
		}
	}

}
