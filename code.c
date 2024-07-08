int findTheWinner(int n, int k) {
    int val = 0;
    for (int i = 2; i <= n; i++) {
        val = (val + k) % i;
    }
    return val + 1;
}
/*
This method is simply a recursive method but wihtout using recursive space.
Let's take an example n=5,k=2.
[1,2,3,4,5](values)=[0,1,2,3,4](pos)->[1,3,4,5](values)=[3,0,1,2](pos)->[1,3,5](values)=[1,2,0](pos)->
[3,5](values)=[0,1](pos)->[3](values)=[0](pos)
so the final positon of winner everytime will be zero 
so positions of winner in the steps are 0,0,2,0,2 i.e 0,0+2%2,0+2%3,2+2%4,0+2%5 i.e val,val+k%2,val+k%3,val+k%4,val+k%5
*/
