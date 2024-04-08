import java.util.Scanner;
public class main {
public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt(), cnt =0;
	
	boolean isPrime = true;
	int n = sc.nextln();
	if(n==1) continue;
	for (int i =2; i*i<=n;i++)
		if (n%i==0) {
		isPrime = false;
		break;
		}
		
		if (isPrime == true) cnt++;
		}
			System.out.println(cnt);
			sc.close();
			}
			}
