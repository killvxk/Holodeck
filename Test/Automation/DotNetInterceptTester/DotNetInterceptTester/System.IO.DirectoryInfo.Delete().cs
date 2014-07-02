namespace DotNetInterceptTester.My_System.IO.DirectoryInfo
{
public class Delete_System_IO_DirectoryInfo
{
public static bool _Delete_System_IO_DirectoryInfo( )
{
   //Parameters


   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.IO.DirectoryInfo.Delete();
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.IO.DirectoryInfo.Delete();
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


}
}
}