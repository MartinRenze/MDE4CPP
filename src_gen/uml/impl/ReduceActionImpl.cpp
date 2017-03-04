#include "ReduceActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ReduceActionImpl::ReduceActionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	
	
	
}

ReduceActionImpl::~ReduceActionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ReduceAction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ReduceActionImpl::ReduceActionImpl(const ReduceActionImpl & obj)
{
	//create copy of all Attributes
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_isOrdered = obj.getIsOrdered();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	m_activity  = obj.getActivity();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_context  = obj.getContext();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup = obj.getInGroup();
	this->getInGroup()->insert(this->getInGroup()->end(), _inGroup->begin(), _inGroup->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> _inInterruptibleRegion = obj.getInInterruptibleRegion();
	this->getInInterruptibleRegion()->insert(this->getInInterruptibleRegion()->end(), _inInterruptibleRegion->begin(), _inInterruptibleRegion->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> _inPartition = obj.getInPartition();
	this->getInPartition()->insert(this->getInPartition()->end(), _inPartition->begin(), _inPartition->end());

	m_inStructuredNode  = obj.getInStructuredNode();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _incoming = obj.getIncoming();
	this->getIncoming()->insert(this->getIncoming()->end(), _incoming->begin(), _incoming->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _input = obj.getInput();
	this->getInput()->insert(this->getInput()->end(), _input->begin(), _input->end());

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityEdge>>> _outgoing = obj.getOutgoing();
	this->getOutgoing()->insert(this->getOutgoing()->end(), _outgoing->begin(), _outgoing->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _output = obj.getOutput();
	this->getOutput()->insert(this->getOutput()->end(), _output->begin(), _output->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement = obj.getRedefinedElement();
	this->getRedefinedElement()->insert(this->getRedefinedElement()->end(), _redefinedElement->begin(), _redefinedElement->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> _redefinedNode = obj.getRedefinedNode();
	this->getRedefinedNode()->insert(this->getRedefinedNode()->end(), _redefinedNode->begin(), _redefinedNode->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Classifier>>> _redefinitionContext = obj.getRedefinitionContext();
	this->getRedefinitionContext()->insert(this->getRedefinitionContext()->end(), _redefinitionContext->begin(), _redefinitionContext->end());

	m_reducer  = obj.getReducer();


	//clone containt lists
	if(obj.getCollection()!=nullptr)
	{
		m_collection.reset(dynamic_cast<uml::InputPin*>(obj.getCollection()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::ExceptionHandler>>> _handlerList = obj.getHandler();
	for(std::shared_ptr<uml::ExceptionHandler> _handler : *_handlerList)
	{
		this->getHandler()->push_back(std::shared_ptr<uml::ExceptionHandler>(dynamic_cast<uml::ExceptionHandler*>(_handler->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _localPostconditionList = obj.getLocalPostcondition();
	for(std::shared_ptr<uml::Constraint> _localPostcondition : *_localPostconditionList)
	{
		this->getLocalPostcondition()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPostcondition->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> _localPreconditionList = obj.getLocalPrecondition();
	for(std::shared_ptr<uml::Constraint> _localPrecondition : *_localPreconditionList)
	{
		this->getLocalPrecondition()->push_back(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPrecondition->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	if(obj.getResult()!=nullptr)
	{
		m_result.reset(dynamic_cast<uml::OutputPin*>(obj.getResult()->copy()));
	}
}

ecore::EObject *  ReduceActionImpl::copy() const
{
	return new ReduceActionImpl(*this);
}

std::shared_ptr<ecore::EClass> ReduceActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getReduceAction();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void ReduceActionImpl::setIsOrdered (bool _isOrdered)
{
	m_isOrdered = _isOrdered;
} 

bool ReduceActionImpl::getIsOrdered() const 
{
	return m_isOrdered;
}

//*********************************
// Operations
//*********************************
bool ReduceActionImpl::input_type_is_collection(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ReduceActionImpl::output_types_are_compatible(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool ReduceActionImpl::reducer_inputs_output(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::InputPin> ReduceActionImpl::getCollection() const
{
//assert(m_collection);
    return m_collection;
}
void ReduceActionImpl::setCollection(std::shared_ptr<uml::InputPin> _collection)
{
    m_collection = _collection;
}

std::shared_ptr<uml::Behavior> ReduceActionImpl::getReducer() const
{
//assert(m_reducer);
    return m_reducer;
}
void ReduceActionImpl::setReducer(std::shared_ptr<uml::Behavior> _reducer)
{
    m_reducer = _reducer;
}

std::shared_ptr<uml::OutputPin> ReduceActionImpl::getResult() const
{
//assert(m_result);
    return m_result;
}
void ReduceActionImpl::setResult(std::shared_ptr<uml::OutputPin> _result)
{
    m_result = _result;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> ReduceActionImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ExceptionHandler>>> handler = getHandler();
	_ownedElement->insert(_ownedElement->end(), handler->begin(), handler->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> input = getInput();
	_ownedElement->insert(_ownedElement->end(), input->begin(), input->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> localPostcondition = getLocalPostcondition();
	_ownedElement->insert(_ownedElement->end(), localPostcondition->begin(), localPostcondition->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Constraint>>> localPrecondition = getLocalPrecondition();
	_ownedElement->insert(_ownedElement->end(), localPrecondition->begin(), localPrecondition->end());
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> output = getOutput();
	_ownedElement->insert(_ownedElement->end(), output->begin(), output->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());

	return _ownedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> ReduceActionImpl::getOutput() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> _output(new std::vector<std::shared_ptr<uml::OutputPin>>()) ;
	
	_output->push_back(getResult());

	return _output;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> ReduceActionImpl::getInGroup() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> _inGroup(new std::vector<std::shared_ptr<uml::ActivityGroup>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::InterruptibleActivityRegion>>> inInterruptibleRegion = getInInterruptibleRegion();
	_inGroup->insert(_inGroup->end(), inInterruptibleRegion->begin(), inInterruptibleRegion->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityPartition>>> inPartition = getInPartition();
	_inGroup->insert(_inGroup->end(), inPartition->begin(), inPartition->end());
	_inGroup->push_back(getInStructuredNode());

	return _inGroup;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> ReduceActionImpl::getInput() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> _input(new std::vector<std::shared_ptr<uml::InputPin>>()) ;
	
	_input->push_back(getCollection());

	return _input;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> ReduceActionImpl::getRedefinedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> _redefinedElement(new std::vector<std::shared_ptr<uml::RedefinableElement>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityNode>>> redefinedNode = getRedefinedNode();
	_redefinedElement->insert(_redefinedElement->end(), redefinedNode->begin(), redefinedNode->end());

	return _redefinedElement;
}
std::shared_ptr<uml::Element> ReduceActionImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getActivity()!=nullptr)
	{
		_owner = getActivity();
	}
	if(getInStructuredNode()!=nullptr)
	{
		_owner = getInStructuredNode();
	}
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}

	return _owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ReduceActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //16813
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1684
		case UmlPackage::REDUCEACTION_COLLECTION:
			return getCollection(); //16828
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //16822
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1680
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //16821
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //16814
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //16815
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //16820
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //16816
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //16817
		case UmlPackage::ACTION_INPUT:
			return getInput(); //16823
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //16810
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //16824
		case UmlPackage::REDUCEACTION_ISORDERED:
			return getIsOrdered(); //16829
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //16825
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //16826
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1685
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1686
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1687
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //16818
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //16827
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1681
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1682
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1683
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1688
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //16811
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //16819
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //16812
		case UmlPackage::REDUCEACTION_REDUCER:
			return getReducer(); //16830
		case UmlPackage::REDUCEACTION_RESULT:
			return getResult(); //16831
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1689
	}
	return boost::any();
}
