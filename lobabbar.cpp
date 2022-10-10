#include<bits/stdc++.h>
using namespace std;
#define ll long long

class BinaryTreeNode{
public:
	int data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

	BinaryTreeNode(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}

};

BinaryTreeNode* InputLevelWise(){
	queue<BinaryTreeNode*> pendingnodes;
	int rootdata;
	cout<<"enter root data"<<endl;
	cin>>rootdata;
	
}

int main()
{
	BinaryTreeNode* root = InputLevelWise();
}
