package jave;

import java.util.Scanner;

public class p4{
public static void main(String[] args){
Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
sc.close();

for(int i = 1;i<=n;i++){
for(int j = 1;j<=n;j++){
if(n-i<n/2){
System.out.print(i+j);
break;}
else{
System.out.print((n-i)+j);
}
}
}
}
}



