using System;

namespace DotNetInterceptTester.My_System.ComponentModel.TimeSpanConverter
{
public class ConvertToString_System_ComponentModel_TimeSpanConverter_System_ComponentModel_ITypeDescriptorContext_System_Object
{
public static bool _ConvertToString_System_ComponentModel_TimeSpanConverter_System_ComponentModel_ITypeDescriptorContext_System_Object( )
{

   //class object
    System.ComponentModel.TimeSpanConverter _System_ComponentModel_TimeSpanConverter = new System.ComponentModel.TimeSpanConverter();

   //Parameters
   System.ComponentModel.ITypeDescriptorContext context = null;
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
      returnVal_Real = _System_ComponentModel_TimeSpanConverter.ConvertToString(context,_value);
   }

   catch( System.Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnVal_Intercepted = _System_ComponentModel_TimeSpanConverter.ConvertToString(context,_value);
   }

   catch( System.Exception e )
   {
      exception_Intercepted = e;
   }


   return( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
