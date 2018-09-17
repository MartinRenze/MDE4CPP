//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_LITERALSTRINGLITERALSTRINGIMPL_HPP
#define UML_LITERALSTRINGLITERALSTRINGIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../LiteralString.hpp"

#include "uml/impl/LiteralSpecificationImpl.hpp"

//*********************************
namespace uml 
{
	class LiteralStringImpl :virtual public LiteralSpecificationImpl, virtual public LiteralString 
	{
		public: 
			LiteralStringImpl(const LiteralStringImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			LiteralStringImpl& operator=(LiteralStringImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			LiteralStringImpl();
			virtual std::shared_ptr<LiteralString> getThisLiteralStringPtr() const;
			virtual void setThisLiteralStringPtr(std::weak_ptr<LiteralString> thisLiteralStringPtr);

			//Additional constructors for the containments back reference
			LiteralStringImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			LiteralStringImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			LiteralStringImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			LiteralStringImpl(std::weak_ptr<uml::Slot > par_owningSlot);


			//Additional constructors for the containments back reference
			LiteralStringImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);




		public:
			//destructor
			virtual ~LiteralStringImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 The specified String value.
			<p>From package UML::Values.</p> */ 
			virtual std::string getValue() const ;
			
			/*!
			 The specified String value.
			<p>From package UML::Values.</p> */ 
			virtual void setValue (std::string _value); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<LiteralString> m_thisLiteralStringPtr;
	};
}
#endif /* end of include guard: UML_LITERALSTRINGLITERALSTRINGIMPL_HPP */
