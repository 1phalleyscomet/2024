public class main{
	  static int Area(int ax,int ay,int bx,int by,int cx,int cy){
	    int ss=0;
	    ss+=ax*by-ay*bx;
	    ss+=bx*cy-by*cx;
	    ss+=cx*ay-cy*ax;
	    return Math.abs(ss/2);
	  }
	  static int Area(int[] a, int[] b, int[] c) {
		  int ss=0;
		  ss+=a[0]*b[1]-a[1]*b[0];
		  ss+=b[0]*c[1]-b[1]*c[0];
		  ss+=c[0]*a[1]-c[1]*a[0];
		  return Math.abs(ss/2);
	  }
	  static int Area(int[][] pt){
		    int ss=0;
		    for(int i=0;i<3;i++)
		      ss+=pt[i][0]*pt[(i+1)%3][1];
		    for(int i=0;i<pt.length;i++)
		      ss-=pt[i][1]*pt[(i+1)%3][0];
		    return Math.abs(ss/2);
		  }

	public static void main(String[] args){
	  System.out.println(Area(0,0, 2,0, 0,1));
	  int[] a={0,0}, b={2,0},c={0,1};
	  System.out.println(Area(a,b,c));
	  int[][] p={{0,0},{2,0},{0,1}};
	  System.out.println(Area(p));
	}
	}
