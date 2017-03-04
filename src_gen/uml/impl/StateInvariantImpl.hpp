//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_STATEINVARIANTSTATEINVARIANTIMPL_HPP
#define UML_STATEINVARIANTSTATEINVARIANTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../StateInvariant.hpp"

#include "impl/InteractionFragmentImpl.hpp"



//*********************************
namespace uml 
{
	class StateInvariantImpl :virtual public InteractionFragmentImpl, virtual public StateInvariant 
	{
		public: 
			StateInvariantImpl(const StateInvariantImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			StateInvariantImpl& operator=(StateInvariantImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			StateInvariantImpl();

		public:
			//destructor
			virtual ~StateInvariantImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A Constraint that should hold at runtime for this StateInvariant.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::Constraint> getInvariant() const ;
			
			/*!
			 A Constraint that should hold at runtime for this StateInvariant.
			<p>From package UML::Interactions.</p> */
			virtual void setInvariant(std::shared_ptr<uml::Constraint> _invariant) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace> getNamespace() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_STATEINVARIANTSTATEINVARIANTIMPL_HPP */

