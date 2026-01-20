// Not Allowed two Constructor

class Demo
{
    constructor()                   //default
    {
        this.No1 = 0;
        this.No2 = 0;
        console.log("Inside Default Constructor");
    }

    constructor(A,B)                   //Parameterized
    {
        this.No1 = A;
        this.No2 = B;
        console.log("Inside  Constructor");
    }
}

function main()
{
    let obj1 = new Demo();
    let obj2 = new Demo(10,20);

}
main();