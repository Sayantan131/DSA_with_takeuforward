pattern19(int n){
   int ints = 0;
 for(int i=0; i<n; i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    for(int j=0;j<ints;j++){
        cout<<" ";
    }
     for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<"\n";
    ints = ints+2;
 }
 int in2 = ints-2;
 for(int i=0;i<n;i++){

for(int j=0;j<=i;j++){
    cout<<"*";
}
for(int j=0;j<in2;j++){
    cout<<" ";
}
for(int j=0;j<=i;j++){
    cout<<"*";
}
cout<<"\n";
in2 = in2-2;
 }
