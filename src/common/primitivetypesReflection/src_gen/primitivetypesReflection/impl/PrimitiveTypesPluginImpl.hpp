//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef PRIMITIVETYPES_PLUGINIMPL_HPP
#define PRIMITIVETYPES_PLUGINIMPL_HPP

#include "primitivetypesReflection/PrimitiveTypesPlugin.hpp"

namespace PrimitiveTypes 
{
	class PrimitiveTypesPluginImpl : virtual public PrimitiveTypesPlugin 
	{
		public:
			PrimitiveTypesPluginImpl();
			virtual ~PrimitiveTypesPluginImpl();
		
			virtual std::string eclipseURI();
			virtual std::string eNAME();
			virtual std::string eNS_URI();
			virtual std::string eNS_PREFIX();
	
			virtual std::shared_ptr<ecore::EObject> create(const std::string& name) const;
			virtual std::shared_ptr<ecore::EObject> create(const std::string& name, std::shared_ptr<ecore::EObject> container, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<uml::Factory> getFactory();
			virtual std::shared_ptr<uml::Package> getPackage();
	};
}
#endif /* end of include guard: PRIMITIVETYPES_PLUGINIMPL_HPP */
