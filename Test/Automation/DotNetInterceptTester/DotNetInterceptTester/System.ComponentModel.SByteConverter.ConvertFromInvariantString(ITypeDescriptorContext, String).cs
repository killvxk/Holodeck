namespace DotNetInterceptTester.My_System.ComponentModel.SByteConverter
{
public class ConvertFromInvariantString_System_ComponentModel_SByteConverter_System_ComponentModel_ITypeDescriptorContext_System_String
{
public static bool _ConvertFromInvariantString_System_ComponentModel_SByteConverter_System_ComponentModel_ITypeDescriptorContext_System_String( )
{
   //Parameters
   System.ComponentModel.ITypeDescriptorContext context = null;
   System.String text = null;

   //ReturnType/Value
   System.Object returnVal_Real = null;
   System.Object returnVal_Intercepted = null;

   //Exception
   Exception exception_Real = null;
   Exception exception_Intercepted = null;

   InterceptionMaintenance.disableInterception( );

   try
   {
      returnValue_Real = System.ComponentModel.SByteConverter.ConvertFromInvariantString(context,text);
   }

   catch( Exception e )
   {
      exception_Real = e;
   }


   InterceptionMaintenance.enableInterception( );

   try
   {
      returnValue_Intercepted = System.ComponentModel.SByteConverter.ConvertFromInvariantString(context,text);
   }

   catch( Exception e )
   {
      exception_Intercepted = e;
   }


   Return ( ( exception_Real.Messsage == exception_Intercepted.Message ) && ( returnValue_Real == returnValue_Intercepted ) );
}
}
}
