namespace DotNetInterceptTester.My_System.Diagnostics.TextWriterTraceListener
{
public class ctor_System_Diagnostics_TextWriterTraceListener_System_String_System_String
{
public static bool _ctor_System_Diagnostics_TextWriterTraceListener_System_String_System_String( )
{
   //Parameters
   System.String fileName = null;
   System.String name = null;


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Diagnostics.TextWriterTraceListener.ctor(fileName,name);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Diagnostics.TextWriterTraceListener.ctor(fileName,name);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
