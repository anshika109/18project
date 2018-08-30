#include<iostream>
using namespace std;
int queue[10],i,n,front=-1,rear=-1,data,data2,data3;
char a,b,c;
void deletion_front(){
	if(front==-1)
	cout<<"underflow"<<endl;
	else 
	front=front+1;
	cout<<"deletion_front:";
	for(i=front;i<=rear;i++)
	cout<<queue[i]<<" ";
	cout<<endl;
}
void deletion_rear(){
	if(front==-1)
	cout<<"underflow"<<endl;
	else
	rear=rear-1;
	cout<<"deletion_rear:";
	for(i=front;i<=rear;i++)
	cout<<queue[i]<<" ";
	cout<<endl;
}
int main(){
	int choice;
	char choice1,choice2;
	cout<<"enter no of elements"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++){
		cin>>data;
		if(rear==9)
			cout<<"overflow"<<endl;
			else  if(front==-1)
			{
				front=0;
				rear=0;
				queue[rear]=data;
			}
		else{
			rear=rear+1;
			queue[rear]=data;
		}
	}
	cout<<"inserted queue:";
	for(i=0;i<n;i++)
	cout<<queue[i]<<" ";
	cout<<endl;
	cout<<"enter 1 for input restricted"<<endl;
	cout<<"enter 2 for output restricted"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			{
			cout<<"enter a for insertion at rear"<<endl;
			cout<<"enter b for deletion at front"<<endl;
			cout<<"enter c for deletion at rear"<<endl;
			cin>>choice1;
			switch(choice1){
				case 'a':
					{
					cout<<"enter the element insert in rear"<<endl;
					cin>>data3;
					if(rear==9)
						cout<<"overflow"<<endl;
						else if(front==-1){
							front=0;
							rear=0;
							queue[rear]=data3;
						}
					else{
						rear=rear+1;
						queue[rear]=data3;
					}
					cout<<"Inserted rear queue"<<" ";
					for(i=front;i<=rear;i++){
					cout<<queue[i];
		        	}
			cout<<endl;
					break;
				}
				case 'b':
				{	deletion_front();
					break;
				}
				case 'c':
				{
					deletion_rear();
					break;}
			}
			break;
		}
		case 2:
			cout<<"enter a for deletion at front"<<endl;
			cout<<"enter b for insertion at front"<<endl;
			cout<<"enter c for insertion at rear"<<endl;
			cout<<"enter choice for output restricted"<<endl;
			cin>>choice2;
			switch(choice2){
				case 'a':
					deletion_front();
					break;
				case 'b':
					deletion_front();
					cout<<"enter the element insert in front"<<endl;
					cin>>data2;
					if(front==0)
						cout<<"overflow"<<endl;
					else{
						front=front-1;
						queue[front]=data2;
					}
				
				for(i=front;i<=rear;i++){
					cout<<queue[i];
				}
					break;
				case 'c':
					cout<<"enter the element insert in rear"<<endl;
					cin>>data3;
					if(rear==9)
						cout<<"overflow"<<endl;
						else if(front==-1){
							front=0;
							rear=0;
							queue[rear]=data3;
						}
					else{
						rear=rear+1;
						queue[rear]=data3;
					}
					cout<<"Inserted rear queue"<<" ";
					for(i=front;i<=rear;i++){
					cout<<queue[i];
			}
					break;	
			}
			break;
			default:
				cout<<"invalid input by user";
	}
	return 0;
}
