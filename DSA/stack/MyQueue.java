package stack;

public class MyQueue {

    int front;
    int end;
    int max;
    int[] arrQueue;

    public MyQueue(int size) {
        this.max = size;
        this.arrQueue = new int[max];
        this.front = -1;
        this.end = -1;
    }

    void push(int data) {

        if (this.end == max - 1) {
            System.out.println("Queue Overflow");
            return;
        }

        if (this.front == -1) {
            this.front = 0;
        }

        this.arrQueue[++end] = data;
    }

    int pop() {

        if (this.front == -1 || this.front > this.end) {
            System.out.println("Queue Empty");
            return -1;
        }

        int value = this.arrQueue[front++];

        // Reset queue when all elements are removed
        if (front > end) {
            front = -1;
            end = -1;
        }

        return value;
    }

    void display() {

        if (front == -1) {
            System.out.println("Queue Empty");
            return;
        }

        for (int i = front; i <= end; i++) {
            System.out.print(arrQueue[i] + " ");
        }

        System.out.println();
    }
}