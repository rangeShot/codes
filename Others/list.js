// Implementation 
// creating singly linked list , nesting & detecting loops

//User Input
let size=5;
let arr=[1,2,3,4,5];
let connectLastAt=-2;//for nesting this value should be in range (0,size], otherwise nesting will failed


class Node{
    constructor(data){
        this.data=data,
        this.next=null;
    }
    getData(){
        return this.data;
    }
}

// Disply Linked list
function disp(tempHead){
    console.log("Displaying Linked list");
    let temp=tempHead;
    while(temp!=null){
        console.log(temp.data);
        temp=temp.next;
    }
    console.log("Null");
    console.log();
}

// detect loop
function hasCycle(head){
    let tempHead1=head;
    let tempHead2=head;
    let haveCycle=false;
    while(tempHead2.next !=null && tempHead2.next.next != null){
        tempHead1=tempHead1.next;
        tempHead2=tempHead2.next.next;
        if(tempHead1 == tempHead2){
            haveCycle=true;
            break;
        }
    }
    return haveCycle;
}


// creating linked list
let head=new Node(arr[0]);
let count=1;
let tempNode=head;
while(count<size){
    let temp=new Node(arr[count]);
    tempNode.next=temp;
    tempNode=tempNode.next;
    count++;
}

// displaying the original linked list
console.log("This is the original list");
disp(head);

//  nesting the orignal list
let nestedNode=head;
let lastNode=head;
count=1;
while(lastNode.next != null){
    lastNode=lastNode.next;
    if(count==connectLastAt)nestedNode=lastNode;
    count++;
}
if(connectLastAt>0){
    lastNode.next=nestedNode;
    console.log("The list has been nested");
}
else{
    console.log("Nesting failed");
}


// disp(head);

// detecting cycle
if(hasCycle(head)){
    console.log("loop detected");
}
else {
    console.log("loop not detected");
}

