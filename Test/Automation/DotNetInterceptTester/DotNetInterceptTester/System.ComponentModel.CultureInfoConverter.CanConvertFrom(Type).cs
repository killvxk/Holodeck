using System;

namespace DotNetInterceptTester.My_System.ComponentModel.CultureInfoConverter
{
public class CanConvertFrom_System_ComponentModel_CultureInfoConverter_System_Type
{
public static bool _CanConvertFrom_System_ComponentModel_CultureInfoConverter_System_Type( )
{

   //class object
    System.ComponentModel.CultureInfoConverter _System_ComponentModel_CultureInfoConverter = new System.ComponentModel.CultureInfoConverter();

   //Parameters
   System.Type sourceType = null;

   //ReturnType/Value
   System.Boolean returnVal_Real = false;
   System.Boolean returnVal_Intercepted = false;

   //Exception
   System.Exception exception_Real = null;
   System.Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnVal_Real = _System_ComponentModel_CultureInfoConverter.CanConvertFrom(sourceType);
   }

   catch( System.Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnVal_Intercepted = _System_ComponentModel_CultureInfoConverter.CanConvertFrom(sourceType);
   }

   catch( System.Exception e )
   {
      exception_Intercepted = e;
   }


   return( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
