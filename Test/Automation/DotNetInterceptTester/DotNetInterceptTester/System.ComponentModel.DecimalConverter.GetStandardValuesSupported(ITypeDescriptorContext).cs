using System;

namespace DotNetInterceptTester.My_System.ComponentModel.DecimalConverter
{
public class GetStandardValuesSupported_System_ComponentModel_DecimalConverter_System_ComponentModel_ITypeDescriptorContext
{
public static bool _GetStandardValuesSupported_System_ComponentModel_DecimalConverter_System_ComponentModel_ITypeDescriptorContext( )
{

   //class object
    System.ComponentModel.DecimalConverter _System_ComponentModel_DecimalConverter = new System.ComponentModel.DecimalConverter();

   //Parameters
   System.ComponentModel.ITypeDescriptorContext context = null;

   //ReturnType/Value
   System.Boolean returnVal_Real = false;
   System.Boolean returnVal_Intercepted = false;

   //Exception
   System.Exception exception_Real = null;
   System.Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnVal_Real = _System_ComponentModel_DecimalConverter.GetStandardValuesSupported(context);
   }

   catch( System.Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnVal_Intercepted = _System_ComponentModel_DecimalConverter.GetStandardValuesSupported(context);
   }

   catch( System.Exception e )
   {
      exception_Intercepted = e;
   }


   return( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
