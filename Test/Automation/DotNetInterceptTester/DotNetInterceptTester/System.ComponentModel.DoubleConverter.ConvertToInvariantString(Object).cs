using System;

namespace DotNetInterceptTester.My_System.ComponentModel.DoubleConverter
{
public class ConvertToInvariantString_System_ComponentModel_DoubleConverter_System_Object
{
public static bool _ConvertToInvariantString_System_ComponentModel_DoubleConverter_System_Object( )
{

   //class object
    System.ComponentModel.DoubleConverter _System_ComponentModel_DoubleConverter = new System.ComponentModel.DoubleConverter();

   //Parameters
   System.Object _value = null;

   //ReturnType/Value
   System.String returnVal_Real = null;
   System.String returnVal_Intercepted = null;

   //Exception
   System.Exception exception_Real = null;
   System.Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnVal_Real = _System_ComponentModel_DoubleConverter.ConvertToInvariantString(_value);
   }

   catch( System.Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnVal_Intercepted = _System_ComponentModel_DoubleConverter.ConvertToInvariantString(_value);
   }

   catch( System.Exception e )
   {
      exception_Intercepted = e;
   }


   return( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
