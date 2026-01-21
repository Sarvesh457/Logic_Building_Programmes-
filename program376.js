class Arthmetic
{

    constructor(A,B)                   
    {
        this.No1 = A;
        this.No2 = B;
    }

    Addition()
    {
        return(this.No1 + this.No2);
    }

    Subtraction()
    {
        return(this.No1 - this.No2);
    }
}

function main()
{
    let iRet = 0;
    let obj = new Arthmetic(10,20);

    iRet = obj.Addition();
    console.log("The Addition is",iRet);

    
    iRet = obj.Subtraction();
    console.log("The Addition is",iRet);
}
main();