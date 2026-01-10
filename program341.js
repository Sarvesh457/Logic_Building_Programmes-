// Accept and display even and odd
function CheckEvenOdd(no)
{
    if((no % 2) == 0)
    {
        console.log("it is a even number");
    }
    else
    {
        console.log("it is a odd number");
    }
}
function main()
{
    let iValue = 10;

    CheckEvenOdd(iValue);

}

main();