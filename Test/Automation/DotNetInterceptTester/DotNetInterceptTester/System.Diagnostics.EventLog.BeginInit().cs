namespace DotNetInterceptTester.My_System.Diagnostics.EventLog
{
public class BeginInit_System_Diagnostics_EventLog
{
public static bool _BeginInit_System_Diagnostics_EventLog( )
{
   //Parameters


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.Diagnostics.EventLog.BeginInit();
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.Diagnostics.EventLog.BeginInit();
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}
