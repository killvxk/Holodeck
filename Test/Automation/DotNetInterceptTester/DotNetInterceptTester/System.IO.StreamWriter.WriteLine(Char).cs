namespace DotNetInterceptTester.My_System.IO.StreamWriter
{
public class WriteLine_System_IO_StreamWriter_System_Char
{
public static bool _WriteLine_System_IO_StreamWriter_System_Char( )
{
   //Parameters
   System.Char _value = null;


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.IO.StreamWriter.WriteLine(_value);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.IO.StreamWriter.WriteLine(_value);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
