//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CENTRALBUFFERNODECENTRALBUFFERNODEIMPL_HPP
#define UML_CENTRALBUFFERNODECENTRALBUFFERNODEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../CentralBufferNode.hpp"

#include "impl/ObjectNodeImpl.hpp"



//*********************************
namespace uml 
{
	class CentralBufferNodeImpl :virtual public ObjectNodeImpl, virtual public CentralBufferNode 
	{
		public: 
			CentralBufferNodeImpl(const CentralBufferNodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			CentralBufferNodeImpl& operator=(CentralBufferNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			CentralBufferNodeImpl();

		public:
			//destructor
			virtual ~CentralBufferNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> getInGroup() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_CENTRALBUFFERNODECENTRALBUFFERNODEIMPL_HPP */

