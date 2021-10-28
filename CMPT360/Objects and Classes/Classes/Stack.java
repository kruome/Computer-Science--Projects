/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stack;

/**
 *
 * @author kdorji01
 */
public class stack {
    private int[] elements;
    private int size;
    
    stack(){
       this(16);
    }
    stack(int capacity){
       elements = new int[capacity];
    }
    boolean empty(){
        return size == 0;
    }
    int peek(){
        return elements[size-1];
    }
    void push(int value){
        if(size >= elements.length){
            int[] temp = new int[elements.length*2];
            for(int i = 0; i < temp.length; i++){
                temp[i] = elements[i];
            }
            elements = temp;
        }
        elements[size] = value;
        size++;
    }
    int pop(){
        /*int not_copied = elements[size-1];
        size--;
        return not_copied;*/
        return elements[--size];
    }
    int getSize(){
        return size;
    }
    
    public static void main(String args[]){
        stack n1 = new stack();
        for(int i = 0; i < 10; i ++){
            n1.push(i);
        }
        while(!n1.empty()){
            System.out.print(n1.pop()+ " ");
        }
    }
}
