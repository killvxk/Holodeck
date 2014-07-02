namespace DotNetInterceptTester.My_System.Console
{
public class Write_System_String_System_Object_System_Object_System_Object_System_Object
{
public static bool _Write_System_String_System_Object_System_Object_System_Object_System_Object( )
{
   //Parameters
   System.String format = null;
   System.Object arg0 = null;
   System.Object arg1 = null;
   System.Object arg2 = null;
   System.Object arg3 = null;


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Console.Write(format,arg0,arg1,arg2,arg3);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Console.Write(format,arg0,arg1,arg2,arg3);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
