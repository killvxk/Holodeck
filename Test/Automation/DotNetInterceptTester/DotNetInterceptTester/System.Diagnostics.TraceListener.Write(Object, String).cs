namespace DotNetInterceptTester.My_System.Diagnostics.TraceListener
{
public class Write_System_Diagnostics_TraceListener_System_Object_System_String
{
public static bool _Write_System_Diagnostics_TraceListener_System_Object_System_String( )
{
   //Parameters
   System.Object o = null;
   System.String category = null;


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Diagnostics.TraceListener.Write(o,category);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Diagnostics.TraceListener.Write(o,category);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}