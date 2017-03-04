//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_EXPANSIONNODEEXPANSIONNODEIMPL_HPP
#define UML_EXPANSIONNODEEXPANSIONNODEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../ExpansionNode.hpp"

#include "impl/ObjectNodeImpl.hpp"



//*********************************
namespace uml 
{
	class ExpansionNodeImpl :virtual public ObjectNodeImpl, virtual public ExpansionNode 
	{
		public: 
			ExpansionNodeImpl(const ExpansionNodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ExpansionNodeImpl& operator=(ExpansionNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ExpansionNodeImpl();

		public:
			//destructor
			virtual ~ExpansionNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 One of regionAsInput or regionAsOutput must be non-empty, but not both.
			regionAsInput->notEmpty() xor regionAsOutput->notEmpty() */ 
			virtual bool region_as_input_or_output(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ExpansionRegion for which the ExpansionNode is an input.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::ExpansionRegion> getRegionAsInput() const ;
			
			/*!
			 The ExpansionRegion for which the ExpansionNode is an input.
			<p>From package UML::Actions.</p> */
			virtual void setRegionAsInput(std::shared_ptr<uml::ExpansionRegion> _regionAsInput) ;
			/*!
			 The ExpansionRegion for which the ExpansionNode is an output.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::ExpansionRegion> getRegionAsOutput() const ;
			
			/*!
			 The ExpansionRegion for which the ExpansionNode is an output.
			<p>From package UML::Actions.</p> */
			virtual void setRegionAsOutput(std::shared_ptr<uml::ExpansionRegion> _regionAsOutput) ;
							
			
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
#endif /* end of include guard: UML_EXPANSIONNODEEXPANSIONNODEIMPL_HPP */

