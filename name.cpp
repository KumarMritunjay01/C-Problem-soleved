public class Complex
{
float real,img;
Complex()  // constructor
{}
Complex(float x,float y)
{
real=x;
img =y;
}
Complex add(Complex a)
{
Complex temp=new Complex();
temp.real=this.real+a.real;
temp.img=this.img+a.img;
return temp;
}
Complex sub(Complex a)
{
Complex temp=new Complex();
temp.real=this.real-a.real;
temp.img=this.img-a.img;
return temp;
}
public static void main(String[] args)
{
Complex c1=new Complex(5.6f,6.12f);
Complex c2=new Complex(12.6f,4.03f);
Complex res;
res=c1.add(c2);
System.out.printf("Addition is: %2.2f+%2.2fi\n",res.real,res.img);
res=c1.sub(c2);
System.out.printf("Subtraction is: %2.2f+%2.2fi\n",res.real,res.img);
}
}