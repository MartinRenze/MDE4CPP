//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TEMPLATEPARAMETERSUBSTITUTIONTEMPLATEPARAMETERSUBSTITUTIONIMPL_HPP
#define UML_TEMPLATEPARAMETERSUBSTITUTIONTEMPLATEPARAMETERSUBSTITUTIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../TemplateParameterSubstitution.hpp"

#include "impl/ElementImpl.hpp"



//*********************************
namespace uml 
{
	class TemplateParameterSubstitutionImpl :virtual public ElementImpl, virtual public TemplateParameterSubstitution 
	{
		public: 
			TemplateParameterSubstitutionImpl(const TemplateParameterSubstitutionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			TemplateParameterSubstitutionImpl& operator=(TemplateParameterSubstitutionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TemplateParameterSubstitutionImpl();

		public:
			//destructor
			virtual ~TemplateParameterSubstitutionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The actual ParameterableElement must be compatible with the formal TemplateParameter, e.g., the actual ParameterableElement for a Class TemplateParameter must be a Class.
			actual->forAll(a | a.isCompatibleWith(formal.parameteredElement)) */ 
			virtual bool must_be_compatible(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ParameterableElement that is the actual parameter for this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ParameterableElement> getActual() const ;
			
			/*!
			 The ParameterableElement that is the actual parameter for this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual void setActual(std::shared_ptr<uml::ParameterableElement> _actual) ;
			/*!
			 The formal TemplateParameter that is associated with this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::TemplateParameter> getFormal() const ;
			
			/*!
			 The formal TemplateParameter that is associated with this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual void setFormal(std::shared_ptr<uml::TemplateParameter> _formal) ;
			/*!
			 The ParameterableElement that is owned by this TemplateParameterSubstitution as its actual parameter.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ParameterableElement> getOwnedActual() const ;
			
			/*!
			 The ParameterableElement that is owned by this TemplateParameterSubstitution as its actual parameter.
			<p>From package UML::CommonStructure.</p> */
			virtual void setOwnedActual(std::shared_ptr<uml::ParameterableElement> _ownedActual) ;
			/*!
			 The TemplateBinding that owns this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::TemplateBinding> getTemplateBinding() const ;
			
			/*!
			 The TemplateBinding that owns this TemplateParameterSubstitution.
			<p>From package UML::CommonStructure.</p> */
			virtual void setTemplateBinding(std::shared_ptr<uml::TemplateBinding> _templateBinding) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_TEMPLATEPARAMETERSUBSTITUTIONTEMPLATEPARAMETERSUBSTITUTIONIMPL_HPP */

