using System;

namespace DotNetInterceptTester.My_System.ComponentModel.BooleanConverter
{
public class GetStandardValues_System_ComponentModel_BooleanConverter
{
public static bool _GetStandardValues_System_ComponentModel_BooleanConverter( )
{

   //class object
    System.ComponentModel.BooleanConverter _System_ComponentModel_BooleanConverter = new System.ComponentModel.BooleanConverter();

   //Parameters

   //ReturnType/Value
   System.Collections.ICollection returnVal_Real = null;
   System.Collections.ICollection returnVal_Intercepted = null;

   //Exception
   System.Exception exception_Real = null;
   System.Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnVal_Real = _System_ComponentModel_BooleanConverter.GetStandardValues();
   }

   catch( System.Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnVal_Intercepted = _System_ComponentModel_BooleanConverter.GetStandardValues();
   }

   catch( System.Exception e )
   {
      exception_Intercepted = e;
   }


   return( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
