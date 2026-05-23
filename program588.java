class program588
{
    public static void main(String[] args) throws Exception
    {
        String str = "Hello";

        byte Arr[] = str.getBytes();

        byte Key = 0x11;

        System.out.println("Orignal data : "+str);
        
        //Encrptions process
        for(int i = 0;i < Arr.length;i++)
        {
            Arr[i] = (byte)(Arr[i] ^ Key);
        }

        String output = new String(Arr);

        System.out.println("Encrypted data : "+output);

        //Decyption process
        for(int i = 0;i < Arr.length;i++)
        {
            Arr[i] = (byte)(Arr[i] ^ Key);
        }

        String out = new String(Arr);

        System.out.println("Decrypted data : "+out);
    }    
}