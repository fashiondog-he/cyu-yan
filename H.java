public class H {
    public static void main(String[] args) {
        //99chengfabiao
        int a = 0;
        int b = 0;
        int c = 0;
        for(a=1;a<10;a++){
            for(b = 0;b<=a;b++){
                c = a * b;
                System.out.print(a + "*" + b +"="+ c);
            }
            System.out.println();
        }
    }
}